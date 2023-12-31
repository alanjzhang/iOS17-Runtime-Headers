/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKLocalSearchExternalTransitLookupParameters : NSObject <NSCopying> {
    NSString * _sourceIdentifier;
    NSArray * _stationCodes;
    NSDate * _transactionDate;
    CLLocation * _transactionLocation;
}

@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, copy) NSArray *stationCodes;
@property (nonatomic, retain) NSDate *transactionDate;
@property (nonatomic, retain) CLLocation *transactionLocation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setStationCodes:(id)arg1;
- (void)setTransactionDate:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (id)sourceIdentifier;
- (id)stationCodes;
- (id)transactionDate;
- (id)transactionLocation;

@end
