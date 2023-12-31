/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSConcreteBlockSinkObservation : NSObservation {
    NSObject<NSObservable> * _LHSobservable;
    id /* block */  _block;
    int  _tag;
}

- (id*)_observerStorage;
- (void*)_observerStorageOfSize:(unsigned long long)arg1;
- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)finishObserving;
- (id)initWithObservable:(id)arg1 blockSink:(id /* block */)arg2 tag:(int)arg3;
- (bool)isEqual:(id)arg1;
- (void)remove;

@end
