/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

@interface ISIconObserver : NSObject <ISIconManagerObserver> {
    id  _delegate;
}

@property (readonly) <ISIconObserverDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)iconManager:(id)arg1 didInvalidateIcons:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
