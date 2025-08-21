//
//  YSAdvSDKExpressFeedAdManager.h
//  YSAdvSDKDemo
//
//  Created by yanchao on 2025/7/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class YSAdvSDKExpressFeedAdManager;

@protocol YSAdvSDKExpressFeedAdViewDelegate <NSObject>

@optional

/**
 广告加载成功
 */
- (void)expressFeedAdSuccessToLoad:(NSArray<id> *_Nullable)views;

/**
 广告加载失败
 @param error 错误信息
 */
- (void)expressFeedAdFailToLoadWithError:(NSError *)error;


/**
 广告展示成功
 */
- (void)expressFeedAdDidBecomeVisible;

/**
 广告被点击
 */
- (void)expressFeedAdDidClicked;

/**
 广告即将关闭回调
 */
- (void)expressFeedAdDidRemoved;

/**
 广告关闭了其他控制器
 */
- (void)expressFeedAdDidCloseOtherController:(NSInteger)interactionType;

/**
 广告不喜欢
 */
- (void)expressFeedAdDislike:(NSArray<id> *)filterWords;
@end


typedef NS_ENUM(NSInteger, YSAdvSDKExpressFeedAdSize) {
    YSAdvSDKExpressFeedAd_Feed228_150,
    YSAdvSDKExpressFeedAd_Feed690_388
};


@interface YSAdvSDKExpressFeedAdManager : NSObject<YSAdvSDKExpressFeedAdViewDelegate>

/**
 *  委托对象
 */
@property (nonatomic, weak) id<YSAdvSDKExpressFeedAdViewDelegate> delegate;

/**
 *  返回的竞价价
 */
- (double)salePrice;

#pragma mark -初始化模板渲染信息流广告
/**
 初始化模板渲染信息流广告
 @param placementId  广告位id
 */
- (instancetype)initWithPlacementId:(NSInteger)placementId;

#pragma mark -加载模板渲染信息流广告
/**
 加载模板渲染信息流广告
 */
- (void)loadExpressFeedAdWithAdSize:(YSAdvSDKExpressFeedAdSize)adSize andCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END

