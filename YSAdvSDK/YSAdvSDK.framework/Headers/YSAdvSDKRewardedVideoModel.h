//
//  YSAdvSDKRewardedVideoModel.h
//  YSAdvSDK
//
//  Created by yanchao on 2025/5/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YSAdvSDKRewardedVideoModel : NSObject

@property (nonatomic, copy, nullable) NSString *userId;

@property (nonatomic, copy, nullable) NSString *extra;

@property (nonatomic, copy, nullable) NSString *rewardName;

@property (nonatomic, assign) NSInteger rewardAmount;

@end

NS_ASSUME_NONNULL_END
