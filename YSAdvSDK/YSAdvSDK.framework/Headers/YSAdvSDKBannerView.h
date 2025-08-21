//
//  YSAdvSDKBannerView.h
//  YSAdvSDK
//  banner广告
//  Created by yanchao on 2024/3/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKBannerView;

@protocol YSBannerAdDelegate <NSObject>

@optional

/**
 广告加载成功
 @param bannerView 展示的视图
 */
- (void)bannerAdLoadSuccess:(YSAdvSDKBannerView *)bannerView;

/**
 广告加载失败
 @param errorCode 错误码
 @param errorMessage 错误信息
 */
- (void)bannerAdLoadFail:(NSInteger)errorCode andErrorMessage:(NSString *)errorMessage;

/**
 广告曝光成功
 */
- (void)bannerAdExposedSuccess;

/**
 广告展示失败
 @param errorMessage 错误信息
 */
- (void)bannerAdShowFail:(NSString *)errorMessage;

/**
 广告被点击
 */
- (void)bannerAdDidClicked;

/**
 广告点击了关闭
 */
- (void)bannerAdDidClosed;

@end


@interface YSAdvSDKBannerView : UIView<YSBannerAdDelegate>
/**
 *  委托对象
 */
@property (nonatomic, weak) id<YSBannerAdDelegate> delegate;

/**
 *  Banner广告展示的控制器
 */
@property (nonatomic, strong) UIViewController *rootViewController;

/**
 *  返回的竞价价格
 */
- (double)salePrice;

#pragma mark -初始化Banner广告
/**
 初始化Banner广告
 @param placementId  广告位id
 */
- (instancetype)initWithPlacementId:(NSInteger)placementId;

#pragma mark -加载Banner广告
/**
 加载Banner广告
 @param adSize  广告展示尺寸
 */
- (void)loadBannerAdWithAdSize:(CGSize)adSize;

@end

NS_ASSUME_NONNULL_END
