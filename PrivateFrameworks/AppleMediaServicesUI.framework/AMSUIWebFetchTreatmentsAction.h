/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebFetchTreatmentsAction : AMSUIWebAction {
    NSArray * _areaIds;
    bool  _includeExperimentData;
    bool  _includePayload;
}

@property (nonatomic, retain) NSArray *areaIds;
@property (nonatomic) bool includeExperimentData;
@property (nonatomic) bool includePayload;

- (void).cxx_destruct;
- (id)areaIds;
- (bool)includeExperimentData;
- (bool)includePayload;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAreaIds:(id)arg1;
- (void)setIncludeExperimentData:(bool)arg1;
- (void)setIncludePayload:(bool)arg1;

@end
