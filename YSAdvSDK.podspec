#
# Be sure to run `pod lib lint YSAdvSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'YSAdvSDK'
  s.version          = '3.1.17'
  s.summary          = 'A short description of YSAdvSDK.'
  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC
  s.homepage         = 'https://github.com/Ezviz-Open/YSAdvSDK-IOS.git"'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yanchao' => 'open-team@ezvizlife.com' }
  s.source           = { :git => "https://github.com/Ezviz-Open/YSAdvSDK-IOS.git", :tag => "#{s.version}"  }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '12.0'
  s.resources = "YSAdvSDK/YSAdvSDK.bundle"
  s.vendored_frameworks = 'YSAdvSDK/YSAdvSDK.framework'
  s.dependency 'Masonry'
  s.dependency 'ReactiveObjC'
  s.dependency 'SDWebImage'
  s.dependency 'MBProgressHUD'
  s.dependency 'lottie-ios','2.5.3'
  
  s.xcconfig = { 'OTHER_LDFLAGS' => '-ObjC' }
  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'GENERATE_INFOPLIST_FILE' => 'YES' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64', 'GENERATE_INFOPLIST_FILE' => 'YES' }
  
end
