Pod::Spec.new do |s|
  s.name         = "AppTunnel"
  s.version      = "1.1.1"
  s.author             = { "AppTunnel" => "mail@apptunnel.com" }
  s.license      = { :type => 'Commercial', :text => 'See https://apptunnel.com/index/tos' }
  s.homepage     = "https://apptunnel.com"
  s.summary      = "AppTunnel mobile a/b testing and feature flags."
  s.description  = "For details please visit https://www.apptunnel.com"
  s.source       = { :git => "https://github.com/apptunnel/apptunnel-ios-sdk.git", :tag => "#{s.version}" }
  s.platform = :ios, '8.0'
  s.preserve_paths = 'AppTunnel.framework'
  s.source_files = s.public_header_files = "AppTunnel.framework/Headers/AppTunnel.h"
  s.vendored_frameworks = "AppTunnel.framework"
end
