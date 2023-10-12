/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUComposition : NSObject <NUIdentifiable> {
    NUIdentifier * _identifier;
    long long  _mediaType;
    NUCompositionSchema * _schema;
}

@property (nonatomic, readonly) NSDictionary *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NUIdentifier *identifier;
@property (nonatomic) long long mediaType;
@property (nonatomic, readonly) NUCompositionSchema *schema;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contents;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCompositionSchema:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComposition:(id)arg1;
- (long long)mediaType;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)schema;
- (void)setMediaType:(long long)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
