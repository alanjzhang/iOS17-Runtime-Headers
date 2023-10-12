/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

@interface AXSSRateLimitingLogger : NSObject {
    NSDate * __dateSinceLastLog;
    NSObject<OS_os_log> * _categoryLog;
    unsigned char  _logLevel;
    double  _timeInterval;
}

@property (nonatomic, retain) NSDate *_dateSinceLastLog;
@property (nonatomic, retain) NSObject<OS_os_log> *categoryLog;
@property (nonatomic, readonly) unsigned char logLevel;
@property (nonatomic, readonly) double timeInterval;

- (void).cxx_destruct;
- (id)_dateSinceLastLog;
- (void)_logStringAtProperLevel:(id)arg1;
- (id)categoryLog;
- (id)initWithLogLevel:(unsigned char)arg1 categoryLog:(id)arg2 timeInterval:(double)arg3;
- (unsigned char)logLevel;
- (bool)logString:(id)arg1;
- (void)setCategoryLog:(id)arg1;
- (void)set_dateSinceLastLog:(id)arg1;
- (double)timeInterval;

@end
