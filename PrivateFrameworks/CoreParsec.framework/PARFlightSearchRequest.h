/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface PARFlightSearchRequest : PARRequest <NSSecureCoding> {
    NSString * _appBundleId;
    NSDate * _date;
    NSString * _flightQuery;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *flightQuery;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)date;
- (void)encodeWithCoder:(id)arg1;
- (id)flightQuery;
- (id)initWithCoder:(id)arg1;
- (unsigned int)nwActivityLabel;
- (Class)responseClass;
- (void)setAppBundleId:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setFlightQuery:(id)arg1;

@end
