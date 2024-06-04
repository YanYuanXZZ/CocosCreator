#
# Be sure to run `pod lib lint CocosCreator.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CocosCreator'
  s.version          = '0.1.0'
  s.summary          = 'A short description of CocosCreator.'
#  s.preserve_paths = [
#        "CocosCreator/Libraries/libs/**/*.{a}",
#        "CocosCreator/Libraries/*.{a}",
#        "CocosCreator/Classes/engine-native",
#        "CocosCreator/Classes/engine-native/cocos",
#        "CocosCreator/Classes/engine-native/external"
#      ]
      s.preserve_paths = [
          "CocosCreator/Classes/engine-native/**/*",
          "CocosCreator/Libraries/libs/**/*.{a}",
        ]
  s.header_mappings_dir = 'Classes'
#  s.header_mappings_dir = 'CocosCreator/Classes/engine-native'
  s.vendored_libraries = [
    'CocosCreator/Libraries/libcocos_engine.a',
    'CocosCreator/Libraries/libboost_container.a'
  ]
  
  
  s.pod_target_xcconfig = {'DEFINES_MODULE' => 'NO'}
#  s.framework = 'CoreVideo', 'AudioToolbox', 'OpenGLES', 'CoreMotion', 'CoreText', 'CFNetwork', 'CoreFoundation', 'MobileCoreServices', 'GameController', 'WebKit', 'CoreMedia', 'AVKit', 'CoreGraphics', 'SystemConfiguration', 'QuartzCore', 'JavaScriptCore', 'Security', 'OpenAL', 'AVFoundation', 'Foundation', 'UIKit', 'Metal', 'MetalKit', 'MetalPerformanceShaders'
  s.framework = 'CoreVideo', 'AudioToolbox', 'OpenGLES', 'CoreMotion', 'CoreText', 'CFNetwork', 'CoreFoundation', 'MobileCoreServices', 'GameController', 'WebKit', 'CoreMedia', 'AVKit', 'CoreGraphics', 'SystemConfiguration', 'QuartzCore', 'JavaScriptCore', 'Security', 'OpenAL', 'AVFoundation', 'Foundation', 'UIKit', 'Metal', 'MetalKit', 'MetalPerformanceShaders'
  s.library = 'c++', 'stdc++', 'z', 'sqlite3', 'iconv'
#  s.private_header_files = "CocosCreator/engine_native/cocos/**/*.h"
  s.public_header_files = "CocosCreator/Classes/*.{h,hpp}"
  s.source_files  = "CocosCreator/Classes/*.{h,hpp,cpp,m,mm}"

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/pudge/CocosCreator'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'pudge' => 'guozhihao2708@shengtian.com' }
  s.source           = { :git => 'https://github.com/pudge/CocosCreator.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.user_target_xcconfig = {
    'ENABLE_TESTABILITY' => 'NO'
  }
  s.ios.deployment_target = '13.0'

  s.xcconfig = {
    'ENABLE_TESTABILITY' => 'NO',
  "GCC_PREPROCESSOR_DEFINITIONS" => [
      'CMAKE_INTDIR="$(CONFIGURATION)$(EFFECTIVE_PLATFORM_NAME)"',
      'GAME_NAME="CocosGame"',
      'CC_PLATFORM_WINDOWS=2',
      'CC_PLATFORM_MACOS=4',
      'CC_PLATFORM_IOS=1',
      'CC_PLATFORM_MAC_OSX=4',
      'CC_PLATFORM_MAC_IOS=1',
      'CC_PLATFORM_ANDROID=3',
      'CC_PLATFORM_OHOS=5',
      'CC_PLATFORM_LINUX=6',
      'CC_PLATFORM_QNX=7',
      'CC_PLATFORM_NX=8',
      'CC_PLATFORM_EMSCRIPTEN=9',
      'CC_PLATFORM=1',
      'CC_NETMODE_CLIENT=0',
      'CC_NETMODE_LISTEN_SERVER=1',
      'CC_NETMODE_HOST_SERVER=2',
      'CC_NETMODE=0',
      'BOOST_ALL_NO_LIB=1',
      'CC_USE_VIDEO=0',
      'CC_USE_WEBVIEW=0',
      'CC_USE_AUDIO=1',
      'CC_USE_XR=0',
      'CC_USE_SOCKET=1',
      'CC_USE_WEBSOCKET_SERVER=0',
      'CC_USE_EDITBOX=1',
      'USE_V8_DEBUGGER=0',
      'CC_USE_MIDDLEWARE=1',
      'CC_USE_SPINE=1',
      'CC_USE_DRAGONBONES=0',
      'CC_USE_JOB_SYSTEM_TBB=0',
      'CC_USE_JOB_SYSTEM_TASKFLOW=0',
      'CC_USE_PHYSICS_PHYSX=0',
      'CC_USE_OCCLUSION_QUERY=0',
      'CC_USE_DEBUG_RENDERER=0',
      'CC_USE_GEOMETRY_RENDERER=0',
      'CC_USE_WEBP=1',
      'CC_EDITOR=0',
      'CC_USE_METAL',
      'BOOST_CONTAINER_NO_LIB',
      'BOOST_CONTAINER_STATIC_LINK',
      'BOOST_UUID_FORCE_AUTO_LINK',
      'V8_TYPED_ARRAY_MAX_SIZE_IN_HEAP=64',
      'ENABLE_MINOR_MC',
      'ENABLE_HANDLE_ZAPPING',
      'V8_ATOMIC_OBJECT_FIELD_WRITES',
      'V8_ATOMIC_MARKING_STATE',
      'V8_ENABLE_LAZY_SOURCE_POSITIONS',
      'V8_SHARED_RO_HEAP',
      'V8_WIN64_UNWINDING_INFO',
      'V8_ENABLE_REGEXP_INTERPRETER_THREADED_DISPATCH',
      'V8_SNAPSHOT_COMPRESSION',
      'V8_ENABLE_SYSTEM_INSTRUMENTATION',
      'V8_ENABLE_WEBASSEMBLY',
      'V8_DEPRECATION_WARNINGS',
      'V8_IMMINENT_DEPRECATION_WARNINGS',
      'CPPGC_CAGED_HEAP',
      'V8_TARGET_ARCH_ARM64',
      'V8_HAVE_TARGET_OS',
      'V8_TARGET_OS_IOS',
      'DISABLE_UNTRUSTED_CODE_MITIGATIONS'
  ],
  'LIBRARY_SEARCH_PATHS' => [
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs'
        # 'CocosCreator/Libraries/libs'
  ],
  'OTHER_LDFLAGS' => [
        '-Wl,-ld_classic',
        '-Wl,-headerpad_max_install_names',
#          '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/**/*.a'
#          '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libcocos2d_iOS.a',
#          '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libboost_container.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libjpeg.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libpng.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libwebp.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libcrypto.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libssl.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libglslang.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libglslang-default-resource-limits.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libMachineIndependent.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libOGLCompiler.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libOSDependent.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libSPIRV.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libSPIRV-Tools-opt.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libSPIRV-Tools.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/glslang/libGenericCodeGen.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/spirv-cross/libspirv-cross-core.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/spirv-cross/libspirv-cross-glsl.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/spirv-cross/libspirv-cross-msl.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libtbb_static.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libv8_monolith.a',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Libraries/libs/libuv_a.a',
        # 'CocosCreator/Libraries/libs'
  ],
  'SYSTEM_HEADER_SEARCH_PATHS' => [
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/external/ios/include/uv',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/external/ios/include/v8'
  ],
  'HEADER_SEARCH_PATHS' => [
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/cocos/platform/ios',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/generated',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/generated/cocos',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/external/sources/khronos',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/cocos',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/cocos/platform',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/cocos/renderer',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/cocos/renderer/core',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/cocos/editor-support',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/cocos/bindings/jswrapper',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/external/sources',
          '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/external/sources/SocketRocket',
        '$(PODS_ROOT)/CocosCreator/CocosCreator/Classes/engine-native/external/ios/include'
        # '$(PODS_ROOT)/../../../CocosCreator/CocosCreator/Classes/engine',
        # '$(PODS_ROOT)/../../../CocosCreator/CocosCreator/Classes/engine/cocos',
        # '$(PODS_ROOT)/../../../CocosCreator/CocosCreator/Classes/engine/cocos/editor-support',
        # '$(PODS_ROOT)/../../../CocosCreator/CocosCreator/Classes/engine/cocos/platform',
        # '$(PODS_ROOT)/../../../CocosCreator/CocosCreator/Classes/engine/external/sources',
        # '$(PODS_ROOT)/../../../CocosCreator/CocosCreator/Classes/engine/external/ios/include/v8'
      ],
    }
end
