/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAKSerializer : NSObject {
    id  ss;
}

- (void)dealloc;
- (id)initForSerializerStream:(id)arg1;
- (unsigned long long)serializeData:(id)arg1;
- (unsigned long long)serializeList:(id)arg1;
- (unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2;
- (unsigned long long)serializeObject:(id)arg1;
- (unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3;
- (unsigned long long)serializePropertyList:(id)arg1;
- (unsigned long long)serializeString:(id)arg1;
- (id)serializerStream;

@end
