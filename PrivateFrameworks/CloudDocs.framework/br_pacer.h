/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface br_pacer : NSObject {
    id /* block */  event_block;
    _Atomic bool  ever_resumed;
    double  last_fire_time;
    double  min_fire_interval;
    NSObject<OS_dispatch_queue> * queue;
    NSObject<OS_dispatch_source> * source;
    NSObject<OS_dispatch_source> * timer;
}

- (void).cxx_destruct;
- (void)dealloc;

@end
