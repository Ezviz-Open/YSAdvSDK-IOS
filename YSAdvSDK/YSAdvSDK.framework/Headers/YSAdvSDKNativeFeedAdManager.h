//
//  YSAdvSDKNativeFeedAdManager.h
//  YSAdvSDKDemo
//
//  Created by yanchao on 2025/5/29.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKNativeFeedAdManager;

@protocol YSAdvSDKNativeFeedAdViewDelegate <NSObject>

@optional

/**
 广告加载成功
 */
- (void)nativeFeedAdSuccessToLoad:(NSArray<id> *_Nullable)nativeAdDataArray;

/**
 广告加载失败
 @param error 错误信息
 */
- (void)nativeFeedAdFailToLoadWithError:(NSError *)error;


/**
 广告展示成功
 */
- (void)nativeFeedAdDidBecomeVisible;

/**
 广告被点击
 */
- (void)nativeFeedAdDidClickedWithView:(UIView *_Nullable)view ;

/**
 广告关闭了其他控制器
 */
- (void)nativeFeedAdDidCloseOtherController;

/**
 广告不喜欢
 */
- (void)nativeFeedAdDislike:(NSArray<id> *)filterWords;

/**
 广告移除回调
 */
- (void)nativeFeedAdDidRemoved:(UIView *)adContainerView;
@end

typedef NS_ENUM(NSInteger, YSAdvSDKNativeFeedAdSize) {
    YSAdvSDKNativeFeedAd_Feed228_150,
    YSAdvSDKNativeFeedAd_Feed690_388
};

@interface YSAdvSDKNativeFeedAdManager : NSObject <YSAdvSDKNativeFeedAdViewDelegate>
/**
 *  委托对象
 */
@property (nonatomic, weak) id<YSAdvSDKNativeFeedAdViewDelegate> delegate;

/**
 *  插屏广告展示的控制器
 */
@property (nonatomic, strong) UIViewController *rootViewController;

/**
 *  返回的竞价价
 */
- (double)salePrice;

#pragma mark -初始化自渲染信息流广告
/**
 初始化自渲染信息流广告
 @param placementId  广告位id
 */
- (instancetype)initWithPlacementId:(NSInteger)placementId;

#pragma mark -加载自渲染信息流广告
/**
 加载自渲染信息流广告
 */
- (void)loadNativeFeedAdWithAdSize:(YSAdvSDKNativeFeedAdSize)adSize andCount:(NSInteger)count;

#pragma mark -注册方法
- (void)registerNativeAd:(id)nativeAd andContainer:(__kindof UIView *)containerView withClickableViews:(NSArray<__kindof UIView *> *)clickableViews;
@end

NS_ASSUME_NONNULL_END
