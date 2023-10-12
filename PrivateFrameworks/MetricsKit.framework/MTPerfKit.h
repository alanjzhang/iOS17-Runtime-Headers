/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTPerfKit : MTMetricsKitTemplate {
    MTSampling * _sampling;
}

- (void).cxx_destruct;
- (id)initWithTopic:(id)arg1;
- (id)sampling;

// MTPerfKit (Measurement)

- (id)flexibleMeasurementWithEventType:(id)arg1;
- (id)flexibleMeasurementWithEventType:(id)arg1 eventData:(id)arg2;
- (id)loadUrlMeasurement;
- (id)loadUrlMeasurementWithEventData:(id)arg1;
- (id)pageRenderMeasurementWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3;
- (id)pageRenderMeasurementWithPageId:(id)arg1 pageType:(id)arg2 pageContext:(id)arg3 eventData:(id)arg4;

@end
