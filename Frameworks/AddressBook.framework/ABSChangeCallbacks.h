/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSChangeCallbacks : NSObject {
    ABSAddressBook * _addressBook;
    NSMutableArray * _externalCallBackThreads;
    NSMutableArray * _externalCallbackContexts;
    NSMutableArray * _externalCallbacks;
    long long  _initialAccessStatus;
}

- (void).cxx_destruct;
- (void)addExternalCallback:(int (*)arg1 onThread:(id)arg2 withContext:(void*)arg3;
- (void)contactStoreChanged:(id)arg1;
- (void)dealloc;
- (bool)hasExternalCallback:(int (*)arg1 onThread:(id)arg2 withContext:(void*)arg3;
- (id)initWithAddressBook:(id)arg1;
- (void)removeExternalCallback:(int (*)arg1 withContext:(void*)arg2;

@end
