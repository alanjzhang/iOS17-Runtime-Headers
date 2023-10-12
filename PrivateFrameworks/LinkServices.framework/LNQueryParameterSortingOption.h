/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNQueryParameterSortingOption : NSObject <NSCopying, NSSecureCoding> {
    long long  _order;
    NSNumber * _sortParameterIndex;
}

@property (nonatomic, readonly) long long order;
@property (nonatomic, readonly, copy) NSString *parameterIdentifier;
@property (nonatomic, readonly, copy) NSNumber *sortParameterIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrder:(long long)arg1 sortParameterIndex:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)order;
- (id)sortParameterIndex;

// LNQueryParameterSortingOption (Deprecated)

- (id)initWithOrder:(long long)arg1 parameterIdentifier:(id)arg2;
- (id)parameterIdentifier;

@end
