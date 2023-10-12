/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MetricKit.framework/MetricKit
 */

@interface MXCallStackThread : NSObject <NSSecureCoding> {
    bool  _attributedThread;
    NSArray * _topFrames;
}

@property (readonly) bool attributedThread;
@property (readonly) NSArray *topFrames;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)attributedThread;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopCallStackFrames:(id)arg1 isAttributedThread:(bool)arg2;
- (id)toDictionary;
- (id)topFrames;

@end
