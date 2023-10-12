/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface EARVoiceCommandActiveSet : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _resourceBaseURL;
    NSSet * _suites;
}

@property (nonatomic, readonly, copy) NSURL *resourceBaseURL;
@property (nonatomic, readonly, copy) NSSet *suites;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistJSONDictionary:(id)arg1;
- (id)initWithSuites:(id)arg1 resourceBaseURL:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)plistJSONDictionary;
- (id)resourceBaseURL;
- (id)suites;

@end
