/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNLazyArrayOperatorSkipLast : _CNLazyArrayOperator {
    CNQueue * _buffer;
    bool  _haveFilledBuffer;
    unsigned long long  _limit;
}

- (void).cxx_destruct;
- (bool)fillBuffer;
- (id)initWithInput:(id)arg1 limit:(unsigned long long)arg2;
- (id)nextObject;

@end
