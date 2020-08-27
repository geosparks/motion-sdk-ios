Pod::Spec.new do |s|
  s.name                  = 'MotionSDK'
  s.version               = '1.0.0-alpha.2'
  s.summary               = 'iOS SDK for Motion, the location intelligence platform'
  s.homepage              = 'https://motion.dev'
  s.author                = { 'Motion' => 'support@motion.de'}
  s.platform              = :ios
  spec.source             = { :git => 'https://github.com/geosparks/motion-sdk-ios.git', :tag => spec.version.to_s }
  s.source_files          = 'MotionSDK/MotionSDK.framework/Headers/*.h'
  s.vendored_frameworks   = 'MotionSDK/MotionSDK.framework'
  s.module_map            = "MotionSDK/MotionSDK.framework/Modules/module.modulemap"
  s.module_name           = 'MotionSDK'
  s.ios.deployment_target = '10.0'
  s.dependency "AWSIoT"
  s.dependency "AWSMobileClient"
  spec.license            = { :type => 'Copyright', :text => 'Copyright (c) 2020 Motion. All rights reserved.' }
end
