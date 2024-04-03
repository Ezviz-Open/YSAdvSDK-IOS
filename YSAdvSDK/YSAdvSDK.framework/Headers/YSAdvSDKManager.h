//
//  YSAdvSDKManager.h
//  C_YSCommonBusiLib
//  广告管理
//  Created by yanchao on 2020/6/11.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, YSTestingEnvironmentType) {
    YSTestingEnvironmentTypeRelease = 0,       //**< 正式环境  */
    YSTestingEnvironmentTypeTest = 1,        //**< 测试环境  */
};

@interface YSAdvSDKManager : NSObject

/**
 * 获取 SDK 版本
 */

+ (NSString *)sdkVersion;

/**
 设置mediaID
 必传，要不然获取不到广告
 */
+ (void)setMediaID:(NSString *)mediaID;

/**
 设置环境 分为测试环境、线上环境
 非必传，默认线上环境
 */
+ (void)setTestingEnvironment:(YSTestingEnvironmentType)type;

/**
 地理位置
 非必传，为了更精准的投放广告
 */
+ (void)setLocationWithLongitude:(double)longitude andLatitude:(double)latitude;

@end

NS_ASSUME_NONNULL_END

