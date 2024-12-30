//
//  YSAdvSDKRewardedVideoView.h
//  YSAdvSDK
//
//  Created by yanchao on 2024/7/24.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKRewardedVideoView;

@protocol  YSAdvSDKRewardedVideoDelegate <NSObject>

@optional

/**
 广告加载成功
 */
- (void)ysRewardedVideoAdLoadSuccess:(YSAdvSDKRewardedVideoView *)rewardedVideoView;

/**
 广告加载失败
 @param errorCode 错误码
 @param errorMessage 错误信息
 */
- (void)ysRewardedVideoAdLoadFail:(NSInteger)errorCode andErrorMessage:(NSString *)errorMessage;

/**
 激励视频广告开始播放（展示回调曝光）
 */
- (void)ysRewardedVideoAdExposedSuccess;


/**
 广告展示失败
 @param errorMessage 错误信息
 */
- (void)ysRewardedVideoAdShowFail:(NSString *)errorMessage;

/**
 激励视频广告被点击
 */
- (void)ysRewardedVideoAdDidClicked;

/**
 激励视频广告跳过（用户操作）
 */
- (void)ysRewardedVideoAdDidClickSkip;

/**
 激励视频广告关闭（支持关闭的广告）
 */
- (void)ysRewardedVideoAdDidClose;


/**
 激励视频广告达到激励条件
 */
- (void)ysRewardedVideoAdDidEffective;


/**
 激励视频广告播放完毕
 */
- (void)ysRewardedVideoAdFinishPlay;

@end


@interface YSAdvSDKRewardedVideoView : UIView<YSAdvSDKRewardedVideoDelegate>

/**
 *  委托对象
 */
@property (nonatomic, weak) id<YSAdvSDKRewardedVideoDelegate> delegate;

/**
 *  返回的竞价价格
 */
- (double)salePrice;

/**
 *  加载激励视频广告
 *  @param placeType  广告位id
 */
- (void)loadRewardVideoAdWithPlaceType:(NSInteger)placeType;

/**
 *  展示激励视频广告
 *  @param viewController  展示的控制器
 */
- (void)showRewardedVideoinViewController:(UIViewController*)viewController;
@end

NS_ASSUME_NONNULL_END
