/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPBeaconShare : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _beaconIdentifier;
    NSDate * _creationDate;
    NSDate * _expirationDate;
    NSUUID * _identifier;
    SPHandle * _owner;
    SPHandle * _sharee;
    long long  _state;
}

@property (nonatomic, copy) NSUUID *beaconIdentifier;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) SPHandle *owner;
@property (nonatomic, copy) SPHandle *sharee;
@property (nonatomic) long long state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 beaconIdentifier:(id)arg2 owner:(id)arg3 sharee:(id)arg4 state:(long long)arg5 creationDate:(id)arg6 expirationDate:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)owner;
- (void)setBeaconIdentifier:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setSharee:(id)arg1;
- (void)setState:(long long)arg1;
- (id)sharee;
- (long long)state;

@end
