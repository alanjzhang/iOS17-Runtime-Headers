/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGMailIntelligenceStringHasher : NSObject {
    NSData * _rotatingSalt;
    NSData * _salt;
}

@property (nonatomic, retain) NSData *rotatingSalt;

+ (long long)hashedString:(id)arg1 salts:(id)arg2;
+ (id)rotatingSaltForDate:(id)arg1;
+ (long long)truncatedSHA256:(id)arg1 salts:(id)arg2;

- (void).cxx_destruct;
- (long long)hashedString:(id)arg1;
- (long long)hashedUserId;
- (id)init;
- (id)initWithSaltValue:(id)arg1;
- (id)rotatingSalt;
- (void)setRotatingSalt:(id)arg1;
- (long long)truncatedSHA256:(id)arg1;
- (long long)unrotatedHashedString:(id)arg1 withHashSize:(unsigned long long)arg2;
- (id)unrotatedHashedStrings:(id)arg1 withHashSize:(unsigned long long)arg2;

@end
