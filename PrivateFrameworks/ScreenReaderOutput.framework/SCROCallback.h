/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROCallback : NSObject <NSSecureCoding> {
    bool  _isAtomic;
    int  _key;
    <NSSecureCoding> * _object;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 object:(id)arg2;
- (bool)isAtomic;
- (int)key;
- (id)object;
- (void)postToHandler:(id)arg1;
- (void)setIsAtomic:(bool)arg1;

@end
