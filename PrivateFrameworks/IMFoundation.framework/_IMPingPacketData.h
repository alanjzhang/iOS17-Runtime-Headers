/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface _IMPingPacketData : NSObject {
    int  _error;
    double  _rtt;
    int  _sequenceNumber;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _timeSent;
    bool  _timedOut;
}

@property (nonatomic, readonly) int error;
@property (nonatomic, readonly) double rtt;
@property (nonatomic, readonly) int sequenceNumber;
@property (nonatomic, readonly) struct timeval { long long x1; int x2; } timeSent;
@property (nonatomic, readonly) bool timedOut;

- (void)_markPacketAsTimedOut:(double)arg1;
- (void)_returnPacketArrived;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)error;
- (id)initWithSequeneceNumber:(int)arg1 timesent:(struct timeval { long long x1; int x2; }*)arg2 error:(int)arg3;
- (double)rtt;
- (int)sequenceNumber;
- (struct timeval { long long x1; int x2; })timeSent;
- (bool)timedOut;

@end
