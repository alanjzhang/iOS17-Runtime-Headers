/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDViewPresentationResult : NSObject <NSSecureCoding> {
    NSError * _error;
    NSNumber * _numberResult;
    NSString * _stringResult;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSNumber *numberResult;
@property (nonatomic, readonly) NSString *stringResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithNumber:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)numberResult;
- (id)stringResult;

@end
