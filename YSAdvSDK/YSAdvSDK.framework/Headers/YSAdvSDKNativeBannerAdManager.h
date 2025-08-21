//
//  YSAdvSDKNativeBannerAdManager.h
//  YSAdvSDKDemo
//
//  Created by yanchao on 2025/5/29.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKNativeBannerAdManager;

@protocol YSAdvSDKNativeBannerAdViewDelegate <NSObject>

@optional

/**
 广告加载成功
 @param nativeAdDataArray 返回数据数组
 */
- (void)nativeBannerAdSuccessToLoad:(NSArray<id> *_Nullable)nativeAdDataArray;

/**
 广告加载失败
 @param error 错误信息
 */
- (void)nativeBannerAdFailToLoadWithError:(NSError *)error;


/**
 广告展示成功
 */
- (void)nativeBannerAdDidBecomeVisible;

/**
 广告被点击
 */
- (void)nativeBannerAdDidClicked;


/**
 广告关闭了其他控制器
 */
- (void)nativeBannerAdDidCloseOtherController;

/**
 广告不喜欢
 @param filterWords 不喜欢详情
 */
- (void)nativeBannerAdDislike:(NSArray<id> *)filterWords;

/**
 广告移除回调
 @param adContainerView 视图
 */
- (void)nativeBannerAdDidRemoved:(UIView *)adContainerView;
@end

typedef NS_ENUM(NSInteger, YSAdvSDKNativeBannerAdSize) {
    YSAdvSDKNativeBannerAdSize_Banner600_90,
    YSAdvSDKNativeBannerAdSize_Banner640_100,
    YSAdvSDKNativeBannerAdSize_Banner600_150,
    YSAdvSDKNativeBannerAdSize_Banner600_260,
    YSAdvSDKNativeBannerAdSize_Banner600_286,
    YSAdvSDKNativeBannerAdSize_Banner600_300,
    YSAdvSDKNativeBannerAdSize_Banner690_388,
    YSAdvSDKNativeBannerAdSize_Banner600_400,
    YSAdvSDKNativeBannerAdSize_Banner600_500
};


@interface YSAdvSDKNativeBannerAdManager : NSObject<YSAdvSDKNativeBannerAdViewDelegate>
/**
 *  委托对象
 */
@property (nonatomic, weak) id<YSAdvSDKNativeBannerAdViewDelegate> delegate;

/**
 *  插屏广告展示的控制器
 */
@property (nonatomic, strong) UIViewController *rootViewController;

/**
 *  返回的竞价价
 */
- (double)salePrice;

#pragma mark -初始化自渲染Banner广告
/**
 初始化自渲染Banner广告
 @param placementId  广告位id
 */
- (instancetype)initWithPlacementId:(NSInteger)placementId;

#pragma mark -加载自渲染Banner广告
/**
 加载自渲染Banner广告
 */
- (void)loadNativeBannerAdWithAdSize:(YSAdvSDKNativeBannerAdSize)adSize;

#pragma mark -注册方法
- (void)registerNativeAd:(id)nativeAd andContainer:(__kindof UIView *)containerView withClickableViews:(NSArray<__kindof UIView *> *)clickableViews;
@end

NS_ASSUME_NONNULL_END
