/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFContextualActionContext : NSObject <NSSecureCoding> {
    bool  _allowsExpensiveFetch;
    NSArray * _files;
    NSArray * _historicalActionIdentifiers;
    NSDate * _preciseTimestamp;
    NSString * _staccatoInteractionType;
    unsigned long long  _surface;
}

@property (nonatomic) bool allowsExpensiveFetch;
@property (nonatomic, retain) NSArray *files;
@property (nonatomic, retain) NSArray *historicalActionIdentifiers;
@property (nonatomic, retain) NSDate *preciseTimestamp;
@property (nonatomic, retain) NSString *staccatoInteractionType;
@property (nonatomic) unsigned long long surface;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsExpensiveFetch;
- (void)encodeWithCoder:(id)arg1;
- (id)files;
- (id)historicalActionIdentifiers;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(unsigned long long)arg1;
- (id)initWithSurface:(unsigned long long)arg1 staccatoInteractionType:(id)arg2 preciseTimestamp:(id)arg3;
- (id)preciseTimestamp;
- (void)setAllowsExpensiveFetch:(bool)arg1;
- (void)setFiles:(id)arg1;
- (void)setHistoricalActionIdentifiers:(id)arg1;
- (void)setPreciseTimestamp:(id)arg1;
- (void)setStaccatoInteractionType:(id)arg1;
- (void)setSurface:(unsigned long long)arg1;
- (id)staccatoInteractionType;
- (unsigned long long)surface;

@end
