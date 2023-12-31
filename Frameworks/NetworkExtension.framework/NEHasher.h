/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHasher : NSCoder {
    NSArray * _classPrefixWhitelist;
    struct CC_SHA1state_st { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8[16]; int x9; } * _sha1Context;
}

+ (id)hashObject:(id)arg1;
+ (id)hashObject:(id)arg1 withClassPrefixWhitelist:(id)arg2;

- (void).cxx_destruct;
- (bool)allowsKeyedCoding;
- (bool)containsValueForKey:(id)arg1;
- (void)dealloc;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (id)decodeDataObject;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (id)decodePropertyListForKey:(id)arg1;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void*)arg2;
- (id)init;
- (long long)versionForClassName:(id)arg1;

@end
