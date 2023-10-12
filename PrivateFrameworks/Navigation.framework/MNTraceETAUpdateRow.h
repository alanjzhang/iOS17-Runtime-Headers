/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceETAUpdateRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    NSError * _error;
    GEOETATrafficUpdateRequest * _request;
    double  _requestTimestamp;
    GEOETATrafficUpdateResponse * _response;
    double  _responseTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double position;
@property (nonatomic, retain) GEOETATrafficUpdateRequest *request;
@property (nonatomic) double requestTimestamp;
@property (nonatomic, retain) GEOETATrafficUpdateResponse *response;
@property (nonatomic) double responseTimestamp;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)error;
- (id)request;
- (double)requestTimestamp;
- (id)response;
- (double)responseTimestamp;
- (void)setError:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestTimestamp:(double)arg1;
- (void)setResponse:(id)arg1;
- (void)setResponseTimestamp:(double)arg1;

// MNTraceETAUpdateRow (MNTracePlayerAdapter)

- (double)position;

@end
