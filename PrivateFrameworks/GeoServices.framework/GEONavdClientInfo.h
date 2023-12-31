/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {
    GEOApplicationAuditToken * _auditToken;
    NSString * _canonicalName;
    NSString * _uniqueClientId;
}

@property (nonatomic, retain) GEOApplicationAuditToken *auditToken;
@property (nonatomic, copy) NSString *canonicalName;
@property (nonatomic, copy) NSString *uniqueClientId;

+ (id)clientInfoForNavdPredictions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditToken;
- (id)canonicalName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2;
- (id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 auditToken:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isCalendarClientInfo;
- (bool)isEqual:(id)arg1;
- (bool)isNavdClientInfo;
- (void)setAuditToken:(id)arg1;
- (void)setCanonicalName:(id)arg1;
- (void)setUniqueClientId:(id)arg1;
- (id)uniqueClientId;

@end
