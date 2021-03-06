/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchRequester : NSObject {
    NSMapTable *_pendingSearches;
    NSLock *_pendingSearchesLock;
}

+ (id)sharedSearchRequester;

- (void)cancelSearch:(id)arg1;
- (void)completions:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id /* block */)arg4 refinement:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7;
- (void)dealloc;
- (id)init;
- (void)search:(id)arg1 finished:(id /* block */)arg2 refinement:(id /* block */)arg3 networkActivity:(id /* block */)arg4 error:(id /* block */)arg5;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id /* block */)arg4 refinement:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id /* block */)arg4 refinement:(id /* block */)arg5 networkActivity:(id /* block */)arg6 error:(id /* block */)arg7 isCompletions:(BOOL)arg8;
- (void)search:(id)arg1 useBackgroundConnection:(BOOL)arg2 finished:(id /* block */)arg3 refinement:(id /* block */)arg4 networkActivity:(id /* block */)arg5 error:(id /* block */)arg6;

@end
