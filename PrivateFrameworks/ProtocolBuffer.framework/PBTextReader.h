/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBTextReader : NSObject {
    NSMutableDictionary * _cachedObjectTypes;
    unsigned long long  _length;
    NSCharacterSet * _nonHexDigitCharacterSet;
    NSMutableDictionary * _objects;
    unsigned long long  _pos;
    NSString * _string;
    NSCharacterSet * _tagNameCharacterSet;
    NSCharacterSet * _whitespaceAndNewlineCharacterSet;
}

- (void)dealloc;
- (id)init;
- (id)readMessageType:(Class)arg1 fromString:(id)arg2;

@end
