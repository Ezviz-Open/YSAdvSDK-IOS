#
#  Be sure to run `pod spec lint YSAdvSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "YSAdvSDK"
  spec.version      = "3.1.5"
  spec.summary      = "萤石广告SDK"

  spec.homepage     = "https://github.com/Ezviz-Open/YSAdvSDK-IOS.git"
  spec.license          = { :type => 'MIT', :file => 'LICENSE' }

  spec.author             = { "" => "" }
  spec.source       = { :git => "https://github.com/Ezviz-Open/YSAdvSDK-IOS.git", :tag => "#{spec.version}" }

  spec.resources  = 'YSAdvSDK.bundle'
  spec.vendored_frameworks = 'YSAdvSDK.framework'  
 
  spec.requires_arc = true
  spec.ios.deployment_target = '10.0'


end
