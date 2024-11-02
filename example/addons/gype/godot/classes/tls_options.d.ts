
import { CryptoKey } from "@godot/classes/crypto_key";
import { X509Certificate } from "@godot/classes/x509_certificate";
import { RefCounted } from "@godot/classes/ref_counted";


export declare class TLSOptions extends RefCounted{
  public client(_trusted_chain: X509Certificate, _common_name_override: GDString | StringName | string): TLSOptions;
  public client_unsafe(_trusted_chain: X509Certificate): TLSOptions;
  public server(_key: CryptoKey, _certificate: X509Certificate): TLSOptions;
  public is_server(): boolean;
  public is_unsafe_client(): boolean;
  public get_common_name_override(): String;
  public get_trusted_ca_chain(): X509Certificate;
  public get_private_key(): CryptoKey;
  public get_own_certificate(): X509Certificate;
}