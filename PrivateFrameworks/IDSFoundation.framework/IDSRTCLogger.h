/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRTCLogger : NSObject <CUTMetricLogger> {
    unsigned short  _category;
}

@property (nonatomic, readonly) unsigned short category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)loggerWithCategory:(unsigned short)arg1;

- (unsigned short)category;
- (id)initWithCategory:(unsigned short)arg1;
- (void)logMetric:(id)arg1;

@end
