/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAUpdateFamilyMemberFlagRequest : FAFamilyCircleRequest {
    NSNumber * _dsid;
    bool  _enabled;
    NSDictionary * _ephemeralAuthResults;
    NSString * _flag;
}

@property (nonatomic, retain) NSDictionary *ephemeralAuthResults;

- (void).cxx_destruct;
- (id)ephemeralAuthResults;
- (id)initWithFamilyMemberDSID:(id)arg1 ephemeralAuthResults:(id)arg2 flag:(id)arg3 enabled:(bool)arg4;
- (id)initWithFamilyMemberDSID:(id)arg1 flag:(id)arg2 enabled:(bool)arg3;
- (void)setEphemeralAuthResults:(id)arg1;
- (void)startRequestWithCompletionHandler:(id /* block */)arg1;

@end
