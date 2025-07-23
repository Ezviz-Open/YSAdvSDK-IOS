//
//  YSAdvSDKRequestManager.h
//  C_YSAdvSDK
//  广告请求管理中心
//  Created by yanchao on 2020/6/17.
//

#import <Foundation/Foundation.h>
#import "YSAdvSDKInfo.h"
#import "YSAdvSDKRTBInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface YSAdvSDKRequestManager : NSObject

@property (nonatomic, copy) NSString*  biddingExtInfoStr;
//广告api请求
- (void)apiGetAdvWithType:(YSAdvSDKPlaceType)advPlaceType
                 appReqId:(NSString *)appReqId
             andShowWidth:(NSInteger)showWidth
            andShowHeight:(NSInteger)showHeight
                  success:(void (^)(NSMutableArray *advInfoArray,YSAdvSDKInfo *adDefaultInfo,YSAdvSDKRTBInfo *rtbInfo,NSString *defaultVideoRedirectUrl))dataBlock
                  failure:(void (^)(NSError *error))errorBlock;

- (void)cancelRequest;

@end

NS_ASSUME_NONNULL_END
