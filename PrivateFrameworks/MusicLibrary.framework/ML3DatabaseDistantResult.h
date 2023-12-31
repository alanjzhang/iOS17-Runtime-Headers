/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseDistantResult : ML3DatabaseResult {
    NSDictionary * _cachedColumnNameIndexMap;
    NSArray * _cachedRows;
    ML3DatabaseDistantConnection * _distantConnection;
    NSArray * _parameters;
    NSString * _sql;
}

@property (nonatomic, readonly) ML3DatabaseDistantConnection *distantConnection;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) NSString *sql;

- (void).cxx_destruct;
- (bool)_fetchRowsIfEmpty;
- (void)_localEnumerateRowsWithBlock:(id /* block */)arg1;
- (void)_remoteEnumerateRowsWithBlock:(id /* block */)arg1;
- (id)columnNameIndexMap;
- (id)description;
- (id)distantConnection;
- (void)enumerateRowsWithBlock:(id /* block */)arg1;
- (unsigned long long)indexForColumnName:(id)arg1;
- (id)init;
- (id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3;
- (id)initWithStatement:(id)arg1;
- (id)parameters;
- (id)sql;

@end
