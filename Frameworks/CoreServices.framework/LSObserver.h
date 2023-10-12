/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSObserver : NSObject {
    <NSObject> * _changeObserver;
    <LSObserverDelegate> * _delegate;
    NSString * _name;
    unsigned int  _observing;
    NSOperationQueue * _queue;
}

@property <LSObserverDelegate> *delegate;
@property (copy) NSString *name;
@property (retain) NSOperationQueue *queue;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_configureCallbacks;
- (void)_tearDownCallbacks;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)name;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
