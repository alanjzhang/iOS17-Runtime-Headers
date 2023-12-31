/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaginatedWebServiceResponse : PKWebServiceResponse {
    NSDate * _lastUpdated;
    bool  _moreComing;
    NSArray * _rawDataList;
}

@property (nonatomic, readonly) NSDate *lastUpdated;
@property (nonatomic, readonly) bool moreComing;
@property (nonatomic, readonly) NSArray *rawDataList;

+ (id)responseWithData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)lastUpdated;
- (bool)moreComing;
- (id)rawDataList;

@end
