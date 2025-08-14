Pod::Spec.new do |s|
  s.name             = 'YSAdvSDK'
  s.version          = '3.2.5'
  s.summary          = 'YSAdvSDK is a comprehensive advertising SDK for iOS applications, providing advanced ad management and monetization capabilities.'
  s.description      = <<-DESC
YSAdvSDK is a powerful advertising SDK designed for iOS applications. It provides comprehensive ad management features including banner ads, interstitial ads, native ads, and video ads. The SDK offers advanced targeting, analytics, and monetization capabilities to help developers maximize their advertising revenue.
                       DESC
  s.homepage         = 'https://github.com/Ezviz-Open/YSAdvSDK-IOS.git'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yanchao' => 'open-team@ezvizlife.com' }
  s.source           = { :git => "https://github.com/Ezviz-Open/YSAdvSDK-IOS.git", :tag => "#{s.version}"  }

  s.ios.deployment_target = '12.0'
  s.vendored_frameworks = 'YSAdvSDK/YSAdvSDK.framework'
  s.resources = "YSAdvSDK/YSAdvSDK.bundle"

  s.dependency 'Masonry'
  s.dependency 'ReactiveObjC'
  s.dependency 'SDWebImage'
  s.dependency 'MBProgressHUD'
  s.dependency 'lottie-ios','2.5.3'
  
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
  s.pod_target_xcconfig = {
     'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
     'GENERATE_INFOPLIST_FILE' => 'YES',
     'IPHONEOS_DEPLOYMENT_TARGET' => '12.0'
   }
   s.user_target_xcconfig = {
     'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64',
     'GENERATE_INFOPLIST_FILE' => 'YES',
     'IPHONEOS_DEPLOYMENT_TARGET' => '12.0'
   }
end
