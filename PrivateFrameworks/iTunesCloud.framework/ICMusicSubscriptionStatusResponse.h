/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    bool  _finalResponse;
    bool  _needsReload;
    ICMusicSubscriptionStatus * _subscriptionStatus;
}

@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (nonatomic) bool needsReload;
@property (nonatomic, readonly, copy) NSDictionary *propertyListRepresentation;
@property (nonatomic, copy) ICMusicSubscriptionStatus *subscriptionStatus;

+ (bool)isValidSubscriptionStatusPropertyListRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)isValidSubscriptionStatusResponseDictionary:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;
- (bool)isExpired;
- (bool)isFinalResponse;
- (bool)needsReload;
- (id)propertyListRepresentation;
- (void)setFinalResponse:(bool)arg1;
- (void)setNeedsReload:(bool)arg1;
- (void)setSubscriptionStatus:(id)arg1;
- (id)subscriptionStatus;

@end
