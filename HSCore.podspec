Pod::Spec.new do |s|
  s.name         = "HSCore"
  s.version      = "0.0.1"
  s.summary      = "Shared resources for apps"
  s.homepage     = "https://github.com/aroldan/HSCore"
  s.license  = 'MIT'
  s.author       = { "Anthony Roldan" => "aroldan@hubspot.com" }
  s.source       = { :git => "git@github.com:aroldan/HSCore.git", :tag => "0.0.1" }
  s.ios.deployment_target = '6.0'
  s.source_files = 'HSCore'
  s.requires_arc = true

  s.dependency 'JLRoutes', '~> 1.5'
end