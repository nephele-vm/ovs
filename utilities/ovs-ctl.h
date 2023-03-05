/*
 * Copyright (c) 2020 Costin Lupu <costin.lupu@cs.pub.ro>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef OVS_CTL_H_
#define OVS_CTL_H_

#ifdef __cplusplus
extern "C" {
#endif

int ovs_vsctl_init(void);
int ovs_vsctl_run_command(int argc, char *argv[]);

int ovs_ofctl_init(void);
int ovs_ofctl_fini(void);
int ovs_ofctl_run_command(int argc, char *argv[]);

void ofctl_add_group(struct ovs_cmdl_context *ctx);
void ofctl_del_groups(struct ovs_cmdl_context *ctx);
void ofctl_add_flow(struct ovs_cmdl_context *ctx);
void ofctl_insert_bucket(struct ovs_cmdl_context *ctx);
void ofctl_remove_bucket(struct ovs_cmdl_context *ctx);

#ifdef __cplusplus
}
#endif

#endif /* OVS_CTL_H_ */
