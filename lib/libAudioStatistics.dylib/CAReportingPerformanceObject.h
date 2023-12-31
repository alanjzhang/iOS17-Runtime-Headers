/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAudioStatistics.dylib
 */

@interface CAReportingPerformanceObject : NSObject {
    NSDictionary * _configuration;
    NSString * _hostApplicationDisplayID;
    NSDictionary * _performanceMetrics;
    NSMutableArray * _processIdentifiers;
    unsigned short  _serviceType;
    NSLock * _sessionsLock;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (nonatomic, retain) NSString *hostApplicationDisplayID;
@property (nonatomic, readonly) NSDictionary *performanceMetrics;
@property (nonatomic, retain) NSMutableArray *processIdentifiers;
@property (nonatomic) unsigned short serviceType;
@property (nonatomic, retain) NSLock *sessionsLock;

- (void).cxx_destruct;
- (void)abandon;
- (void)begin;
- (id)configuration;
- (id)endAndReturnPerformanceMetrics;
- (id)hostApplicationDisplayID;
- (id)initWithProcessIdentifiers:(id)arg1;
- (id)performanceMetrics;
- (id)processIdentifiers;
- (unsigned short)serviceType;
- (id)sessionsLock;
- (void)setConfiguration:(id)arg1;
- (void)setHostApplicationDisplayID:(id)arg1;
- (void)setProcessIdentifiers:(id)arg1;
- (void)setServiceType:(unsigned short)arg1;
- (void)setSessionsLock:(id)arg1;

@end
