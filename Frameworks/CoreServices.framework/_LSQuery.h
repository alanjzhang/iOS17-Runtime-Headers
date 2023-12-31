/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSQuery : NSObject <NSCopying, NSSecureCoding> {
    bool  _legacy;
}

@property (getter=isLegacy, nonatomic) bool legacy;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLegacy;
- (void)setLegacy:(bool)arg1;

// _LSQuery (Internal)

- (bool)_canResolveLocallyWithoutMappingDatabase;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(id /* block */)arg2;
- (id)_init;
- (bool)_remoteResolutionIsExpensive;
- (bool)_requiresDatabaseMappingEntitlement;
- (id)resolveExpensiveQueryRemotelyUsingResolver:(id)arg1 error:(id*)arg2;

@end
