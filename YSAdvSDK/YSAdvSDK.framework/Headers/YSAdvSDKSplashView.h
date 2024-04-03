//
//  YSAdvSDKSplashView.h
//
//  开屏View
//  Created by yanchao on 2020/6/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YSSplashAdDelegate <NSObject>

@optional

/**
 广告加载成功
 */
- (void)splashAdLoadSuccess;

/**
 广告加载失败
 @param errorCode 错误码
 @param errorMessage 错误信息
 */
- (void)splashAdLoadFail:(NSInteger)errorCode andErrorMessage:(NSString *)errorMessage;

/**
 广告曝光成功
 */
- (void)splashAdExposedSuccess;

/**
 广告展示失败
 @param errorMessage 错误信息
 */
- (void)splashAdShowFail:(NSString *)errorMessage;

/**
 广告点击跳过
 */
- (void)splashAdClickSkip;

/**
 广告完成倒计时
 */
- (void)splashAdFinishCountdown;

/**
 广告被点击
 @param hiddenAdvWindow 隐藏传入的window(若自定义window传入需处理)
 */
- (void)splashAdDidClicked:(BOOL)hiddenAdvWindow;

/**
 广告关闭了
 */
- (void)splashAdDidClosed;

/**
 广告关闭了另一个控制器
 */
- (void)splashAdDidCloseOtherController;


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
 *  @param window  keyWindow或者自定义window
 *  @param bottomView  开屏广告半屏时下方展示视图
 */

- (void)showInWindow:(UIWindow *)window withBottomView:(UIView *)bottomView;

@end

NS_ASSUME_NONNULL_END
