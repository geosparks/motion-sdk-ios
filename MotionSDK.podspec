Pod::Spec.new do |spec|
  spec.name                  = 'MotionSDK'
  spec.version               = '1.0.15'
  spec.summary               = 'iOS SDK for Motion, the location intelligence platform'
  spec.homepage              = 'https://motion.dev'
  spec.author                = { 'Motion' => 'support@motion.dev'}
  spec.platform              = :ios
  spec.source                = { :git => 'https://github.com/geosparks/motion-sdk-ios.git', :tag => spec.version.to_s }
  spec.source_files          = 'MotionSDK/MotionSDK.framework/Headers/*.h'
  spec.vendored_frameworks   = 'MotionSDK/MotionSDK.framework'
  spec.module_map            = "MotionSDK/MotionSDK.framework/Modules/module.modulemap"
  spec.module_name           = 'MotionSDK'
  spec.ios.deployment_target = '10.0'
  spec.dependency 'AWSIoT'
  spec.dependency 'AWSMobileClient'
  spec.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  spec.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  spec.license               = { :type => 'Copyright', :text => 'Copyright (c) 2020 Motion. All rights reserved.' }
end