/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BagKit.framework/BagKit
 */

@interface BAGResourceUpdateContext : NSObject <NSSecureCoding> {
    NSError * _error;
    unsigned long long  _loadState;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) unsigned long long loadState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithLoadState:(unsigned long long)arg1 error:(id)arg2;
- (unsigned long long)loadState;
- (void)setError:(id)arg1;
- (void)setLoadState:(unsigned long long)arg1;

@end
