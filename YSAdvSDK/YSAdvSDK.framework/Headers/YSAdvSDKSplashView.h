//
//  YSAdvSDKSplashView.h
//
//  开屏View
//  Created by yanchao on 2020/6/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKSplashView;

@protocol YSSplashAdDelegate <NSObject>

@optional

/**
 广告加载成功
 */
- (void)ysSplashAdLoadSuccess:(YSAdvSDKSplashView *)splashAd;;

/**
 广告加载失败
 @param errorCode 错误码
 @param errorMessage 错误信息
 */
- (void)ysSplashAdLoadFail:(NSInteger)errorCode andErrorMessage:(NSString *)errorMessage;

/**
 广告曝光成功
 */
- (void)ysSplashAdExposedSuccess;

/**
 广告展示失败
 @param errorMessage 错误信息
 */
- (void)ysSplashAdShowFail:(NSString *)errorMessage;

/**
 广告点击跳过
 */
- (void)ysSplashAdClickSkip;

/**
 广告完成倒计时
 */
- (void)ysSplashAdFinishCountdown;

/**
 广告被点击
 @param hiddenAdvWindow 隐藏传入的window(若自定义window传入需处理)
 */
- (void)ysSplashAdDidClicked:(BOOL)hiddenAdvWindow;

/**
 广告关闭了
 */
- (void)ysSplashAdDidClosed;

/**
 广告关闭了另一个控制器
 */
- (void)ysSplashAdDidCloseOtherController;


@end

@interface YSAdvSDKSplashView : UIView <YSSplashAdDelegate>

/**
 *  委托对象
 */
@property (nonatomic, weak) id<YSSplashAdDelegate> delegate;

/**
 *  开屏广告的背景
 */
@property (nonatomic, strong) UIView *backgroundView;

/**
 *  返回的竞价价格
 */
- (double)salePrice;

/**
 *  移除所有子视图
 */
- (void)removeAllSubViews;

#pragma mark -bidding
/**
 *  发送竞胜
 *  @param price 竞胜价格
 */
- (void)sendWinNotificationWithPrice:(NSInteger)price;

/**
 *  发送竞败
 *  @param price 竞败价格
 */
- (void)sendWinFailNotificationWithPrice:(NSInteger)price;

#pragma mark -加载开屏广告
/**
 *  设置广告位
 *  @param placementId  广告位id
 */
- (instancetype)initWithPlacementId:(NSInteger)placementId;


/**
 *  加载开屏广告
 *  @param coldBootFlag  是否为冷启动
 */
- (void)loadSplashAdDataWithColdBootFlag:(BOOL)coldBootFlag;

/**
 *  展示开屏广告
 *  @param window  自定义window
 *  @param bottomView  开屏广告半屏时下方展示视图
 */

- (void)showInWindow:(UIWindow *)window withBottomView:(UIView *)bottomView;

@end

NS_ASSUME_NONNULL_END
