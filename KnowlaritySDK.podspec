Pod::Spec.new do |spec|

 spec.name = "KnowlaritySDK"
spec.version = "0.0.1"
spec.summary = "A CocoaPods library written in Swift"

 spec.description = <<-DESC
This CocoaPods library helps you perform calculation.
DESC

 spec.homepage = "https://github.com/jeantimex/SwiftyLib"
spec.license = { :type => "MIT", :file => "LICENSE" }
spec.author = { "jeantimex" => "jean.timex@gmail.com" }

 spec.ios.deployment_target = "12.0"
spec.swift_version = "5.0"

 spec.source = { :git => "https://github.com/Tarun1209iOS/KnowlaritySDK.git", :tag => "#{spec.version}" }
spec.source_files = "KnowlaritySDK/**/*.{h,m,swift}"

end
